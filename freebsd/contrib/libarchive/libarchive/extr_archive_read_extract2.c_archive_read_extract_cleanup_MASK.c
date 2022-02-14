
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {TYPE_1__* extract; } ;
struct TYPE_2__ {int * ad; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_1)
{
 int VAR_2 = VAR_0;

 if (VAR_1->extract->ad != ((void*)0)) {
  VAR_2 = FUNC_0(VAR_1->extract->ad);
 }
 FUNC_1(VAR_1->extract);
 VAR_1->extract = ((void*)0);
 return (VAR_2);
}
