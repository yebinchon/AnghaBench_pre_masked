
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct move_by_pieces {unsigned int len; unsigned int offset; scalar_t__ explicit_inc_to; scalar_t__ explicit_inc_from; scalar_t__ reverse; int from_addr; int to_addr; scalar_t__ to; scalar_t__ from; scalar_t__ autinc_from; scalar_t__ autinc_to; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef unsigned int HOST_WIDE_INT ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int,unsigned int) ;
 int FUNC_3 (scalar_t__,int,int ,unsigned int) ;
 int FUNC_4 (rtx) ;
 int FUNC_5 (int,int ,int *) ;
 int FUNC_6 () ;
 rtx FUNC_7 (int ,int ) ;
 rtx FUNC_8 (rtx,...) ;

__attribute__((used)) static void
FUNC_9 (rtx (*VAR_3) (rtx, ...), enum machine_mode VAR_4,
    struct move_by_pieces *VAR_5)
{
  unsigned int VAR_6 = FUNC_1 (VAR_4);
  rtx VAR_7 = VAR_2, VAR_8;

  while (VAR_5->len >= VAR_6)
    {
      if (VAR_5->reverse)
 VAR_5->offset -= VAR_6;

      if (VAR_5->to)
 {
   if (VAR_5->autinc_to)
     VAR_7 = FUNC_3 (VAR_5->to, VAR_4, VAR_5->to_addr,
          VAR_5->offset);
   else
     VAR_7 = FUNC_2 (VAR_5->to, VAR_4, VAR_5->offset);
 }

      if (VAR_5->autinc_from)
 VAR_8 = FUNC_3 (VAR_5->from, VAR_4, VAR_5->from_addr,
        VAR_5->offset);
      else
 VAR_8 = FUNC_2 (VAR_5->from, VAR_4, VAR_5->offset);

      if (VAR_1 && VAR_5->explicit_inc_to < 0)
 FUNC_4 (FUNC_7 (VAR_5->to_addr,
      FUNC_0 (-(HOST_WIDE_INT)VAR_6)));
      if (VAR_1 && VAR_5->explicit_inc_from < 0)
 FUNC_4 (FUNC_7 (VAR_5->from_addr,
      FUNC_0 (-(HOST_WIDE_INT)VAR_6)));

      if (VAR_5->to)
 FUNC_4 ((*VAR_3) (VAR_7, VAR_8));
      else
 {



   FUNC_6 ();

 }

      if (VAR_0 && VAR_5->explicit_inc_to > 0)
 FUNC_4 (FUNC_7 (VAR_5->to_addr, FUNC_0 (VAR_6)));
      if (VAR_0 && VAR_5->explicit_inc_from > 0)
 FUNC_4 (FUNC_7 (VAR_5->from_addr, FUNC_0 (VAR_6)));

      if (! VAR_5->reverse)
 VAR_5->offset += VAR_6;

      VAR_5->len -= VAR_6;
    }
}
