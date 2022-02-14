
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firewire_comm {scalar_t__ status; int wait_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct firewire_comm*) ;
 int FUNC_1 (struct firewire_comm*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,int *,int,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_6)
{
 struct firewire_comm *VAR_7;

 VAR_7 = VAR_6;

 FUNC_4(&VAR_7->wait_lock);
 while (VAR_7->status != VAR_0) {
  if (VAR_7->status == VAR_2) {
   FUNC_5(&VAR_7->wait_lock);
   FUNC_1(VAR_7);
   VAR_7->status = VAR_1;
   if (VAR_5)
    FUNC_6("bus_explore done\n");
   FUNC_0(VAR_7);
   FUNC_4(&VAR_7->wait_lock);
  }
  FUNC_3((void *)VAR_7, &VAR_7->wait_lock, VAR_4|VAR_3, "-", 0);
 }
 FUNC_5(&VAR_7->wait_lock);
 FUNC_2(0);
}
