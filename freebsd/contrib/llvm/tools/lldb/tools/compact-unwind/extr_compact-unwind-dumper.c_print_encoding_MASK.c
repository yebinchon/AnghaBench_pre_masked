
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct baton {scalar_t__ cputype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct baton,int *,int ) ;
 int FUNC_1 (struct baton,int *,int ) ;
 int FUNC_2 (struct baton,int *,int ) ;
 int FUNC_3 (struct baton,int *,int ) ;
 int FUNC_4 (char*) ;

void FUNC_5(struct baton VAR_4, uint8_t *VAR_5,
                    uint32_t VAR_6) {

  if (VAR_4.cputype == VAR_3) {
    FUNC_3(VAR_4, VAR_5, VAR_6);
  } else if (VAR_4.cputype == VAR_2) {
    FUNC_2(VAR_4, VAR_5, VAR_6);
  } else if (VAR_4.cputype == VAR_1) {
    FUNC_0(VAR_4, VAR_5, VAR_6);
  } else if (VAR_4.cputype == VAR_0) {
    FUNC_1(VAR_4, VAR_5, VAR_6);
  } else {
    FUNC_4(" -- unsupported encoding arch -- ");
  }
}
