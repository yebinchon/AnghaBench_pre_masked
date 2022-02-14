
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char tab; char decimal; } ;
struct tbl_node {TYPE_1__ opts; } ;
struct TYPE_4__ {int name; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int ,int,int,char*,int,...) ;

__attribute__((used)) static void
FUNC_2(struct tbl_node *VAR_4, int VAR_5, const char *VAR_6, int *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;

 while (VAR_6[*VAR_7] == ' ' || VAR_6[*VAR_7] == '\t')
  (*VAR_7)++;



 VAR_9 = 0;
 if (VAR_6[*VAR_7] == '(') {
  (*VAR_7)++;
  while (VAR_6[*VAR_7 + VAR_9] != ')')
   VAR_9++;
 }

 switch (VAR_8) {
 case 131:
  FUNC_1(VAR_1,
      VAR_5, *VAR_7, "%.*s", VAR_9, VAR_6 + *VAR_7);
  VAR_10 = 2;
  break;
 case 128:
  VAR_10 = 1;
  if (VAR_9 == VAR_10)
   VAR_4->opts.tab = VAR_6[*VAR_7];
  break;
 case 129:
  VAR_10 = 0;
  break;
 case 130:
  VAR_10 = 1;
  if (VAR_9 == VAR_10)
   VAR_4->opts.decimal = VAR_6[*VAR_7];
  break;
 default:
  FUNC_0();
 }

 if (VAR_9 == 0)
  FUNC_1(VAR_2, VAR_5, *VAR_7,
      "%s", VAR_3[VAR_8].name);
 else if (VAR_10 && VAR_9 != VAR_10)
  FUNC_1(VAR_0, VAR_5, *VAR_7,
      "%s want %d have %d", VAR_3[VAR_8].name, VAR_10, VAR_9);

 *VAR_7 += VAR_9;
 if (VAR_6[*VAR_7] == ')')
  (*VAR_7)++;
}
