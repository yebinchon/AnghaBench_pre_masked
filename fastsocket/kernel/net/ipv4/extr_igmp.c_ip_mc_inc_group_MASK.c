
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_mc_list {int users; size_t sfmode; int* sfcount; int multiaddr; struct ip_mc_list* next; scalar_t__ loaded; scalar_t__ gsquery; scalar_t__ reporter; int unsolicit_count; int timer; scalar_t__ tm_running; int lock; int refcnt; scalar_t__ crcount; int * tomb; int * sources; struct in_device* interface; } ;
struct in_device {int dead; int mc_list_lock; int mc_count; struct ip_mc_list* mc_list; } ;
typedef int __be32 ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct ip_mc_list*) ;
 int VAR_4 ;
 int FUNC_3 (struct in_device*,int ) ;
 int FUNC_4 (struct in_device*) ;
 int FUNC_5 (struct in_device*,int *,size_t,int ,int *,int ) ;
 int FUNC_6 (struct in_device*) ;
 struct ip_mc_list* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct in_device *VAR_5, __be32 VAR_6)
{
 struct ip_mc_list *VAR_7;

 FUNC_0();

 for (VAR_7=VAR_5->mc_list; VAR_7; VAR_7=VAR_7->next) {
  if (VAR_7->multiaddr == VAR_6) {
   VAR_7->users++;
   FUNC_5(VAR_5, &VAR_6, VAR_2, 0, ((void*)0), 0);
   goto out;
  }
 }

 VAR_7 = FUNC_7(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  goto out;

 VAR_7->users = 1;
 VAR_7->interface = VAR_5;
 FUNC_4(VAR_5);
 VAR_7->multiaddr = VAR_6;

 VAR_7->sfmode = VAR_2;
 VAR_7->sfcount[VAR_3] = 0;
 VAR_7->sfcount[VAR_2] = 1;
 VAR_7->sources = ((void*)0);
 VAR_7->tomb = ((void*)0);
 VAR_7->crcount = 0;
 FUNC_1(&VAR_7->refcnt, 1);
 FUNC_9(&VAR_7->lock);







 VAR_7->loaded = 0;
 FUNC_10(&VAR_5->mc_list_lock);
 VAR_7->next = VAR_5->mc_list;
 VAR_5->mc_list = VAR_7;
 VAR_5->mc_count++;
 FUNC_11(&VAR_5->mc_list_lock);



 FUNC_2(VAR_7);
 if (!VAR_5->dead)
  FUNC_6(VAR_5);
out:
 return;
}
