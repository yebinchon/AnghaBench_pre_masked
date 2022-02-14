
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_sctp_info {int flags; int invflags; int chunk_match_type; } ;
struct xt_mtchk_param {struct xt_sctp_info* matchinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_0(const struct xt_mtchk_param *VAR_5)
{
 const struct xt_sctp_info *VAR_6 = VAR_5->matchinfo;

 return !(VAR_6->flags & ~VAR_4)
  && !(VAR_6->invflags & ~VAR_4)
  && !(VAR_6->invflags & ~VAR_6->flags)
  && ((!(VAR_6->flags & VAR_3)) ||
   (VAR_6->chunk_match_type &
    (VAR_0
    | VAR_1
    | VAR_2)));
}
