
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_14__ {int (* smdb_cursor ) (TYPE_8__*,TYPE_2__**,int ) ;} ;
struct TYPE_13__ {int (* smdbc_get ) (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;int (* smdbc_close ) (TYPE_2__*) ;} ;
struct TYPE_12__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ SMDB_DBENT ;
typedef TYPE_2__ SMDB_CURSOR ;


 TYPE_8__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*,char,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,char*,int,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,int ,int) ;
 int FUNC_7 (TYPE_8__*,TYPE_2__**,int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_11()
{
 int VAR_8;
 time_t VAR_9;
 SMDB_CURSOR *VAR_10 = ((void*)0);
 SMDB_DBENT VAR_11, VAR_12;

 FUNC_2(&VAR_11, '\0', sizeof VAR_11);
 FUNC_2(&VAR_12, '\0', sizeof VAR_12);

 VAR_8 = VAR_0->smdb_cursor(VAR_0, &VAR_10, 0);
 if (VAR_8 != VAR_2)
 {
  FUNC_4(VAR_6, VAR_4,
         "vacation: set cursor: %s\n",
         FUNC_3(VAR_8));
  return;
 }

 while ((VAR_8 = VAR_10->smdbc_get(VAR_10, &VAR_11, &VAR_12,
        VAR_3)) == VAR_2)
 {
  char *VAR_13;


  if (VAR_11.size == FUNC_5(VAR_5) + 1 &&
      FUNC_6((char *)VAR_11.data, VAR_5,
       (int)VAR_11.size - 1) == 0)
   continue;


  if (VAR_12.size != sizeof VAR_9)
  {
   FUNC_4(VAR_6, VAR_4,
          "vacation: %.*s invalid time stamp\n",
          (int) VAR_11.size, (char *) VAR_11.data);
   continue;
  }

  FUNC_1(&VAR_9, VAR_12.data, sizeof VAR_9);

  if (VAR_11.size > 40)
   VAR_11.size = 40;

  if (VAR_9 <= 0)
  {

   VAR_13 = "(exclusion)\n";
  }
  else
  {
   VAR_13 = FUNC_0(&VAR_9);
  }
  FUNC_4(VAR_7, VAR_4, "%-40.*s %-10s",
         (int) VAR_11.size, (char *) VAR_11.data,
         VAR_13);

  FUNC_2(&VAR_11, '\0', sizeof VAR_11);
  FUNC_2(&VAR_12, '\0', sizeof VAR_12);
 }

 if (VAR_8 != VAR_2 && VAR_8 != VAR_1)
 {
  FUNC_4(VAR_6, VAR_4,
         "vacation: get value at cursor: %s\n",
         FUNC_3(VAR_8));
  if (VAR_10 != ((void*)0))
  {
   (void) VAR_10->smdbc_close(VAR_10);
   VAR_10 = ((void*)0);
  }
  return;
 }
 (void) VAR_10->smdbc_close(VAR_10);
 VAR_10 = ((void*)0);
}
