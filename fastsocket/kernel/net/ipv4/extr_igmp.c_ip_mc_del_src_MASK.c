
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_sf_list {scalar_t__ sf_crcount; struct ip_sf_list* sf_next; } ;
struct ip_mc_list {scalar_t__ multiaddr; scalar_t__* sfcount; size_t sfmode; int lock; int interface; struct ip_sf_list* sources; scalar_t__ crcount; struct ip_mc_list* next; } ;
struct in_device {scalar_t__ mr_ifc_count; scalar_t__ mr_qrv; int mc_list_lock; struct ip_mc_list* mc_list; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ip_mc_list*,int,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ip_mc_list*) ;
 scalar_t__ FUNC_5 (struct ip_mc_list*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct in_device *VAR_6, __be32 *VAR_7, int VAR_8,
    int VAR_9, __be32 *VAR_10, int VAR_11)
{
 struct ip_mc_list *VAR_12;
 int VAR_13 = 0;
 int VAR_14, VAR_15;

 if (!VAR_6)
  return -VAR_1;
 FUNC_2(&VAR_6->mc_list_lock);
 for (VAR_12=VAR_6->mc_list; VAR_12; VAR_12=VAR_12->next) {
  if (*VAR_7 == VAR_12->multiaddr)
   break;
 }
 if (!VAR_12) {

  FUNC_3(&VAR_6->mc_list_lock);
  return -VAR_2;
 }
 FUNC_6(&VAR_12->lock);
 FUNC_3(&VAR_6->mc_list_lock);



 if (!VAR_11) {
  VAR_15 = -VAR_0;
  if (!VAR_12->sfcount[VAR_8])
   goto out_unlock;
  VAR_12->sfcount[VAR_8]--;
 }
 VAR_15 = 0;
 for (VAR_14=0; VAR_14<VAR_9; VAR_14++) {
  int VAR_16 = FUNC_1(VAR_12, VAR_8, &VAR_10[VAR_14]);

  VAR_13 |= VAR_16 > 0;
  if (!VAR_15 && VAR_16 < 0)
   VAR_15 = VAR_16;
 }
 if (VAR_12->sfmode == VAR_4 &&
     VAR_12->sfcount[VAR_4] == 0 &&
     VAR_12->sfcount[VAR_5]) {





  VAR_12->sfmode = VAR_5;
 }
out_unlock:
 FUNC_7(&VAR_12->lock);
 return VAR_15;
}
