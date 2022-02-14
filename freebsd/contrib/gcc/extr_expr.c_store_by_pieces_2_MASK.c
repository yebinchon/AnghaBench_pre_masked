
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct store_by_pieces {unsigned int len; unsigned int offset; scalar_t__ explicit_inc_to; scalar_t__ reverse; int to_addr; int constfundata; int (* constfun ) (int ,unsigned int,int) ;int to; scalar_t__ autinc_to; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef unsigned int HOST_WIDE_INT ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int,unsigned int) ;
 int FUNC_3 (int ,int,int ,unsigned int) ;
 int FUNC_4 (rtx) ;
 rtx FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,unsigned int,int) ;
 rtx FUNC_7 (rtx,...) ;

__attribute__((used)) static void
FUNC_8 (rtx (*VAR_2) (rtx, ...), enum machine_mode VAR_3,
     struct store_by_pieces *VAR_4)
{
  unsigned int VAR_5 = FUNC_1 (VAR_3);
  rtx VAR_6, VAR_7;

  while (VAR_4->len >= VAR_5)
    {
      if (VAR_4->reverse)
 VAR_4->offset -= VAR_5;

      if (VAR_4->autinc_to)
 VAR_6 = FUNC_3 (VAR_4->to, VAR_3, VAR_4->to_addr,
      VAR_4->offset);
      else
 VAR_6 = FUNC_2 (VAR_4->to, VAR_3, VAR_4->offset);

      if (VAR_1 && VAR_4->explicit_inc_to < 0)
 FUNC_4 (FUNC_5 (VAR_4->to_addr,
      FUNC_0 (-(HOST_WIDE_INT) VAR_5)));

      VAR_7 = (*VAR_4->constfun) (VAR_4->constfundata, VAR_4->offset, VAR_3);
      FUNC_4 ((*VAR_2) (VAR_6, VAR_7));

      if (VAR_0 && VAR_4->explicit_inc_to > 0)
 FUNC_4 (FUNC_5 (VAR_4->to_addr, FUNC_0 (VAR_5)));

      if (! VAR_4->reverse)
 VAR_4->offset += VAR_5;

      VAR_4->len -= VAR_5;
    }
}
