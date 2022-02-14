
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_9__ {int nentries; int idlist; } ;
struct TYPE_8__ {scalar_t__ death; int comment; } ;
typedef TYPE_1__ Identity ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_6 () ;
 int VAR_1 ;

__attribute__((used)) static time_t
FUNC_7(void)
{
 time_t VAR_2 = 0, VAR_3 = FUNC_6();
 Identity *VAR_4, *VAR_5;

 for (VAR_4 = FUNC_1(&VAR_0->idlist); VAR_4; VAR_4 = VAR_5) {
  VAR_5 = FUNC_2(VAR_4, VAR_1);
  if (VAR_4->death == 0)
   continue;
  if (VAR_3 >= VAR_4->death) {
   FUNC_4("expiring key '%s'", VAR_4->comment);
   FUNC_3(&VAR_0->idlist, VAR_4, VAR_1);
   FUNC_5(VAR_4);
   VAR_0->nentries--;
  } else
   VAR_2 = (VAR_2 == 0) ? VAR_4->death :
       FUNC_0(VAR_2, VAR_4->death);
 }
 if (VAR_2 == 0 || VAR_2 <= VAR_3)
  return 0;
 else
  return (VAR_2 - VAR_3);
}
