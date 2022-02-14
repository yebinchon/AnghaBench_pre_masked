
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_sf_list {scalar_t__ sf_inaddr; scalar_t__* sf_count; struct ip_sf_list* sf_next; scalar_t__ sf_crcount; scalar_t__ sf_oldin; } ;
struct ip_mc_list {struct ip_sf_list* tomb; struct ip_sf_list* sources; struct in_device* interface; } ;
struct in_device {scalar_t__ mr_qrv; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct in_device*) ;
 int FUNC_1 (struct in_device*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (struct in_device*) ;
 int FUNC_3 (struct ip_sf_list*) ;

__attribute__((used)) static int FUNC_4(struct ip_mc_list *VAR_4, int VAR_5,
 __be32 *VAR_6)
{
 struct ip_sf_list *VAR_7, *VAR_8;
 int VAR_9 = 0;

 VAR_8 = ((void*)0);
 for (VAR_7=VAR_4->sources; VAR_7; VAR_7=VAR_7->sf_next) {
  if (VAR_7->sf_inaddr == *VAR_6)
   break;
  VAR_8 = VAR_7;
 }
 if (!VAR_7 || VAR_7->sf_count[VAR_5] == 0) {

  return -VAR_0;
 }
 VAR_7->sf_count[VAR_5]--;
 if (VAR_7->sf_count[VAR_5] == 0) {
  FUNC_2(VAR_4->interface);
 }
 if (!VAR_7->sf_count[VAR_3] && !VAR_7->sf_count[VAR_2]) {





  if (VAR_8)
   VAR_8->sf_next = VAR_7->sf_next;
  else
   VAR_4->sources = VAR_7->sf_next;
   FUNC_3(VAR_7);
 }
 return VAR_9;
}
