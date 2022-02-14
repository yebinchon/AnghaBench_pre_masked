
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {int kn_sdata; int kn_flags; int kn_sfflags; } ;
struct bintime {int dummy; } ;
typedef scalar_t__ sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bintime) ;
 int FUNC_1 (struct bintime*) ;
 scalar_t__ FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_4, sbintime_t *VAR_5)
{
 struct bintime VAR_6;
 sbintime_t VAR_7;

 if (VAR_4->kn_sdata < 0)
  return (VAR_0);
 if (VAR_4->kn_sdata == 0 && (VAR_4->kn_flags & VAR_1) == 0)
  VAR_4->kn_sdata = 1;




 if ((VAR_4->kn_sfflags & ~(VAR_3 | VAR_2)) != 0)
  return (VAR_0);

 *VAR_5 = FUNC_2(VAR_4->kn_sdata, VAR_4->kn_sfflags);
 if ((VAR_4->kn_sfflags & VAR_2) != 0) {
  FUNC_1(&VAR_6);
  VAR_7 = FUNC_0(VAR_6);
  *VAR_5 -= VAR_7;
 }
 if (*VAR_5 < 0)
  return (VAR_0);
 return (0);
}
