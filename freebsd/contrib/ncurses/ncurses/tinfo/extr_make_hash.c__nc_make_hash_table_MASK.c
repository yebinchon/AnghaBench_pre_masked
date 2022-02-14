
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name_table_entry {int nte_link; int nte_name; } ;
typedef int HashValue ;


 short VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,short) ;

__attribute__((used)) static void
FUNC_2(struct name_table_entry *VAR_2,
      HashValue * VAR_3)
{
    short VAR_4;
    int VAR_5;
    int VAR_6 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
 VAR_3[VAR_4] = -1;
    }
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
 VAR_5 = FUNC_0(VAR_2[VAR_4].nte_name);

 if (VAR_3[VAR_5] >= 0)
     VAR_6++;

 if (VAR_3[VAR_5] != 0)
     VAR_2[VAR_4].nte_link = VAR_3[VAR_5];
 VAR_3[VAR_5] = VAR_4;
    }

    FUNC_1("/* %d collisions out of %d entries */\n", VAR_6, VAR_0);
}
