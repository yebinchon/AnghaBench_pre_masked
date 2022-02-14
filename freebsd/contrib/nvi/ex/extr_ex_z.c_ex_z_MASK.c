
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_19__ {int lno; } ;
struct TYPE_18__ {int lno; } ;
struct TYPE_22__ {int count; TYPE_2__ addr2; TYPE_1__ addr1; int iflags; } ;
struct TYPE_21__ {int lno; int cno; } ;
struct TYPE_20__ {int lno; int cno; } ;
typedef TYPE_3__ SCR ;
typedef TYPE_4__ MARK ;
typedef TYPE_5__ EXCMD ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;




 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_3__*,int*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*,int ,TYPE_4__*,int) ;

int
FUNC_8(SCR *VAR_4, EXCMD *VAR_5)
{
 MARK VAR_6;
 recno_t VAR_7, VAR_8, VAR_9;
 int VAR_10;

 FUNC_2(VAR_4, VAR_5);
 if (FUNC_0(VAR_5->iflags, VAR_2))
  VAR_7 = VAR_5->count;
 else
  VAR_7 = FUNC_3(VAR_4, VAR_3) - 1;

 VAR_8 = 0;
 VAR_10 = 0;
 VAR_9 = VAR_5->addr1.lno;

 switch (FUNC_0(VAR_5->iflags,
     132 | 131 | 130 | 129 | 128)) {
 case 132:
  VAR_10 = 1;
  if (VAR_9 > VAR_7 * 2)
   VAR_5->addr1.lno = (VAR_9 - VAR_7 * 2) + 1;
  else
   VAR_5->addr1.lno = 1;
  VAR_5->addr2.lno = (VAR_5->addr1.lno + VAR_7) - 1;
  break;
 case 131:
  VAR_5->addr1.lno = VAR_9 > VAR_7 ? (VAR_9 - VAR_7) + 1 : 1;
  VAR_5->addr2.lno = VAR_9;
  break;
 case 130:







  VAR_10 = 1;
  VAR_7 = (VAR_7 - 1) / 2;
  VAR_5->addr1.lno = VAR_9 > VAR_7 ? VAR_9 - VAR_7 : 1;
  VAR_5->addr2.lno = VAR_9 + VAR_7;





  VAR_6.lno = VAR_4->lno;
  VAR_6.cno = VAR_4->cno;
  (void)FUNC_7(VAR_4, VAR_0, &VAR_6, 1);
  break;
 case 129:
  VAR_10 = 1;
  VAR_7 = (VAR_7 - 1) / 2;
  VAR_5->addr1.lno = VAR_9 > VAR_7 ? VAR_9 - VAR_7 : 1;
  VAR_5->addr2.lno = VAR_9 - 1;
  if (FUNC_5(VAR_4, VAR_5))
   return (1);
  (void)FUNC_6(VAR_4, "----------------------------------------\n");
  VAR_5->addr2.lno = VAR_5->addr1.lno = VAR_8 = VAR_9;
  if (FUNC_5(VAR_4, VAR_5))
   return (1);
  (void)FUNC_6(VAR_4, "----------------------------------------\n");
  VAR_5->addr1.lno = VAR_9 + 1;
  VAR_5->addr2.lno = (VAR_9 + VAR_7) - 1;
  break;
 default:

  if (FUNC_1(VAR_5, VAR_1))
   ++VAR_9;

 case 128:
  VAR_10 = 1;
  VAR_5->addr1.lno = VAR_9;
  VAR_5->addr2.lno = (VAR_9 + VAR_7) - 1;
  break;
 }

 if (VAR_10) {
  if (FUNC_4(VAR_4, &VAR_9))
   return (1);
  if (VAR_5->addr2.lno > VAR_9)
   VAR_5->addr2.lno = VAR_9;
 }

 if (FUNC_5(VAR_4, VAR_5))
  return (1);
 if (VAR_8)
  VAR_4->lno = VAR_8;
 return (0);
}
