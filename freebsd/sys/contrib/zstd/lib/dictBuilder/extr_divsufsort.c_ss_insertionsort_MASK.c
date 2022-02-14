
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const*,int const*,int const*,int) ;

__attribute__((used)) static
void
FUNC_1(const unsigned char *VAR_0, const int *VAR_1,
                 int *VAR_2, int *VAR_3, int VAR_4) {
  int *VAR_5, *VAR_6;
  int VAR_7;
  int VAR_8;

  for(VAR_5 = VAR_3 - 2; VAR_2 <= VAR_5; --VAR_5) {
    for(VAR_7 = *VAR_5, VAR_6 = VAR_5 + 1; 0 < (VAR_8 = FUNC_0(VAR_0, VAR_1 + VAR_7, VAR_1 + *VAR_6, VAR_4));) {
      do { *(VAR_6 - 1) = *VAR_6; } while((++VAR_6 < VAR_3) && (*VAR_6 < 0));
      if(VAR_3 <= VAR_6) { break; }
    }
    if(VAR_8 == 0) { *VAR_6 = ~*VAR_6; }
    *(VAR_6 - 1) = VAR_7;
  }
}
