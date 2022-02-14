
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_sf_list {scalar_t__ sf_crcount; struct ip_sf_list* sf_next; } ;
struct ip_mc_list {scalar_t__ multiaddr; size_t sfmode; scalar_t__* sfcount; int lock; struct ip_sf_list* sources; scalar_t__ crcount; struct in_device* interface; struct ip_mc_list* next; } ;
struct in_device {scalar_t__ mr_ifc_count; scalar_t__ mr_qrv; int mc_list_lock; struct ip_mc_list* mc_list; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct in_device*) ;
 int FUNC_1 (struct ip_mc_list*,int,scalar_t__*,int) ;
 int FUNC_2 (struct ip_mc_list*,int,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ip_mc_list*) ;
 scalar_t__ FUNC_6 (struct ip_mc_list*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct in_device *VAR_5, __be32 *VAR_6, int VAR_7,
    int VAR_8, __be32 *VAR_9, int VAR_10)
{
 struct ip_mc_list *VAR_11;
 int VAR_12;
 int VAR_13, VAR_14;

 if (!VAR_5)
  return -VAR_0;
 FUNC_3(&VAR_5->mc_list_lock);
 for (VAR_11=VAR_5->mc_list; VAR_11; VAR_11=VAR_11->next) {
  if (*VAR_6 == VAR_11->multiaddr)
   break;
 }
 if (!VAR_11) {

  FUNC_4(&VAR_5->mc_list_lock);
  return -VAR_1;
 }
 FUNC_7(&VAR_11->lock);
 FUNC_4(&VAR_5->mc_list_lock);




 VAR_12 = VAR_11->sfmode == VAR_3;
 if (!VAR_10)
  VAR_11->sfcount[VAR_7]++;
 VAR_14 = 0;
 for (VAR_13=0; VAR_13<VAR_8; VAR_13++) {
  VAR_14 = FUNC_1(VAR_11, VAR_7, &VAR_9[VAR_13], VAR_10);
  if (VAR_14)
   break;
 }
 if (VAR_14) {
  int VAR_15;

  VAR_11->sfcount[VAR_7]--;
  for (VAR_15=0; VAR_15<VAR_13; VAR_15++)
   (void) FUNC_2(VAR_11, VAR_7, &VAR_9[VAR_13]);
 } else if (VAR_12 != (VAR_11->sfcount[VAR_3] != 0)) {






  if (VAR_11->sfcount[VAR_3])
   VAR_11->sfmode = VAR_3;
  else if (VAR_11->sfcount[VAR_4])
   VAR_11->sfmode = VAR_4;
 }
 FUNC_8(&VAR_11->lock);
 return VAR_14;
}
