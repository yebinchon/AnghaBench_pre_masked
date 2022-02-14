
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * command ;
struct biltins {int bname; } ;
typedef int Char ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int **) ;
 struct biltins const* VAR_2 ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 size_t VAR_5 ;
 int FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char) ;

void
FUNC_9(Char **VAR_6, struct command *VAR_7)
{



    const struct biltins *VAR_8;
    int VAR_9, VAR_10, VAR_11, VAR_12;
    unsigned int VAR_13, VAR_14;

    FUNC_0(VAR_7);
    FUNC_0(VAR_6);
    VAR_3 = 0;
    FUNC_1(&VAR_3, VAR_4);


    for (VAR_14 = 0, VAR_8 = VAR_2; VAR_8 < &VAR_2[VAR_5]; ++VAR_8)
 VAR_14 = FUNC_4(VAR_14, FUNC_6(VAR_8->bname));
    ++VAR_14;

    VAR_11 = (VAR_0 + 1) / VAR_14;
    if (!VAR_11)
 VAR_11 = 1;
    VAR_12 = (VAR_5 + (VAR_11 - 1)) / VAR_11;

    for (VAR_8 = VAR_2, VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
     if (VAR_8 < &VAR_2[VAR_5]) {
  VAR_13 = FUNC_6(VAR_8->bname);
  FUNC_7("%s", VAR_8->bname);
  if (VAR_10 < (VAR_11 - 1))
      for (; VAR_13 < VAR_14; VAR_13++)
   FUNC_8(' ');
  ++VAR_8;
     }
 }
 if (VAR_9 < (VAR_12 - 1)) {
     if (VAR_1)
  FUNC_8('\r');
     FUNC_8('\n');
 }
    }



    if (VAR_1)
 FUNC_8('\r');
    FUNC_8('\n');


    FUNC_2(&VAR_3);
    FUNC_3();
}
