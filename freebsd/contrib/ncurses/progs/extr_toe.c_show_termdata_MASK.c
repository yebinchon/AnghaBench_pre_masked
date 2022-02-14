
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db_index; unsigned long checksum; char* term_name; char* description; } ;
typedef int TERMDATA ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*,int,int,int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(int VAR_3, char **VAR_4)
{
    int VAR_5, VAR_6;
    size_t VAR_7;

    if (VAR_2) {
 if (VAR_3 > 1) {
     for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
  for (VAR_6 = 0; VAR_6 <= VAR_5; ++VAR_6) {
      FUNC_0("--");
  }
  FUNC_0("> ");
  FUNC_0("%s\n", VAR_4[VAR_5]);
     }
 }
 if (VAR_2 > 1)
     FUNC_1(VAR_1, VAR_2, sizeof(TERMDATA), VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {




     if (VAR_3 > 1) {
  unsigned long VAR_8 = 0;
  VAR_6 = 0;
  for (;;) {
      for (; VAR_6 < VAR_1[VAR_7].db_index; ++VAR_6) {
   FUNC_0("--");
      }






      FUNC_0("%c-", ((VAR_8 == 0
        || (VAR_8 != VAR_1[VAR_7].checksum))
       ? '*'
       : '+'));
      VAR_8 = VAR_1[VAR_7].checksum;

      ++VAR_6;
      if ((VAR_7 + 1) >= VAR_2
   || FUNC_2(VAR_1[VAR_7].term_name,
      VAR_1[VAR_7 + 1].term_name)) {
   break;
      }
      ++VAR_7;
  }
  for (; VAR_6 < VAR_3; ++VAR_6) {
      FUNC_0("--");
  }
  FUNC_0(":\t");
     }

     (void) FUNC_0("%-10s\t%s\n",
     VAR_1[VAR_7].term_name,
     VAR_1[VAR_7].description);
 }
    }
}
