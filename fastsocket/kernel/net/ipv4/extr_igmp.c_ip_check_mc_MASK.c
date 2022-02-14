
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ip_sf_list {scalar_t__ sf_inaddr; scalar_t__* sf_count; struct ip_sf_list* sf_next; } ;
struct ip_mc_list {scalar_t__ multiaddr; scalar_t__* sfcount; struct ip_sf_list* sources; struct ip_mc_list* next; } ;
struct in_device {int mc_list_lock; struct ip_mc_list* mc_list; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct in_device *VAR_3, __be32 VAR_4, __be32 VAR_5, u16 VAR_6)
{
 struct ip_mc_list *VAR_7;
 struct ip_sf_list *VAR_8;
 int VAR_9 = 0;

 FUNC_0(&VAR_3->mc_list_lock);
 for (VAR_7=VAR_3->mc_list; VAR_7; VAR_7=VAR_7->next) {
  if (VAR_7->multiaddr == VAR_4)
   break;
 }
 if (VAR_7 && VAR_6 == VAR_0) {
  VAR_9 = 1;
 } else if (VAR_7) {
  if (VAR_5) {
   for (VAR_8=VAR_7->sources; VAR_8; VAR_8=VAR_8->sf_next) {
    if (VAR_8->sf_inaddr == VAR_5)
     break;
   }
   if (VAR_8)
    VAR_9 = VAR_8->sf_count[VAR_2] ||
     VAR_8->sf_count[VAR_1] !=
     VAR_7->sfcount[VAR_1];
   else
    VAR_9 = VAR_7->sfcount[VAR_1] != 0;
  } else
   VAR_9 = 1;
 }
 FUNC_1(&VAR_3->mc_list_lock);
 return VAR_9;
}
