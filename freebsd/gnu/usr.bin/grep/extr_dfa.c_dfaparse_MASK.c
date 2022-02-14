
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfa {scalar_t__ nregexps; int depth; } ;
typedef int mbstate_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct dfa* VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_4 () ;
 size_t VAR_12 ;
 char const* VAR_13 ;
 char const* VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int *,int ,int) ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (int) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;

void
FUNC_7 (char const *VAR_19, size_t VAR_20, struct dfa *VAR_21)
{
  VAR_8 = VAR_21;
  VAR_14 = VAR_13 = VAR_19;
  VAR_12 = VAR_20;
  VAR_11 = VAR_1;
  VAR_10 = 1;
  VAR_16 = 0;
  VAR_9 = FUNC_3 (VAR_2);
  if (! VAR_17)
    FUNC_2(FUNC_0("No syntax specified"));

  VAR_18 = FUNC_4();
  VAR_7 = VAR_21->depth;

  FUNC_6(1);

  if (VAR_18 != VAR_1)
    FUNC_2(FUNC_0("Unbalanced )"));

  FUNC_1(VAR_1 - VAR_21->nregexps);
  FUNC_1(VAR_0);

  if (VAR_21->nregexps)
    FUNC_1(VAR_4);

  ++VAR_21->nregexps;
}
