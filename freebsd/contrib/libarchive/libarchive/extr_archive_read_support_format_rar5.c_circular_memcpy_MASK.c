
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int ssize_t ;
typedef int const int64_t ;


 int FUNC_0 (int *,int *,size_t) ;

__attribute__((used)) static void FUNC_1(uint8_t* VAR_0, uint8_t* VAR_1, const uint64_t VAR_2,
    int64_t VAR_3, int64_t VAR_4)
{
 if((VAR_3 & VAR_2) > (VAR_4 & VAR_2)) {
  ssize_t VAR_5 = VAR_2 + 1 - (VAR_3 & VAR_2);
  ssize_t VAR_6 = VAR_4 & VAR_2;

  FUNC_0(VAR_0, &VAR_1[VAR_3 & VAR_2], VAR_5);
  FUNC_0(VAR_0 + VAR_5, VAR_1, VAR_6);
 } else {
  FUNC_0(VAR_0, &VAR_1[VAR_3 & VAR_2], (size_t) (VAR_4 - VAR_3));
 }
}
