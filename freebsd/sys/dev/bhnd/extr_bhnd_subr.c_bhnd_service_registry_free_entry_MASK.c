
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_service_entry {scalar_t__ refs; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bhnd_service_entry*,int ) ;

__attribute__((used)) static void
FUNC_2(struct bhnd_service_entry *VAR_1)
{
 FUNC_0(VAR_1->refs == 0, ("provider has active references"));
 FUNC_1(VAR_1, VAR_0);
}
