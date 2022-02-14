
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __Char ;
typedef int Char ;


 char const VAR_0 ;
 int VAR_1 ;

 int const VAR_2 ;
 int VAR_3 ;

 int const VAR_4 ;

 size_t FUNC_0 (int *,int const*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 size_t FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_5, const Char *VAR_6, const Char *VAR_7, int VAR_8)
{
    int VAR_9, VAR_10;
    const Char *VAR_11;
    const char *VAR_12, *VAR_13, *VAR_14;
    Char VAR_15;

    VAR_11 = VAR_6;
    VAR_13 = VAR_12 = VAR_5;
    VAR_14 = ((void*)0);

    while (VAR_6 < VAR_7 || *VAR_5) {
 size_t VAR_16, VAR_17;
 __Char VAR_18, VAR_19, VAR_20;

 VAR_15 = *VAR_6;
 if (*VAR_5 == VAR_0)
  VAR_14 = VAR_5;

 VAR_17 = FUNC_0(&VAR_18, VAR_6, VAR_1);
 VAR_16 = FUNC_2(&VAR_19, VAR_5, VAR_1);
 switch (VAR_15 & VAR_3) {
 case 130:
     while ((*(VAR_6 + VAR_17) & VAR_3) == 130) {
  VAR_6 += VAR_17;
  VAR_17 = FUNC_0(&VAR_18, VAR_6, VAR_1);
     }
     VAR_11 = VAR_6;
     VAR_12 = VAR_5 + VAR_16;
     VAR_6 += VAR_17;
     continue;
 case 129:
     if (*VAR_5 == VAR_0)
  break;
     VAR_5 += VAR_16;
     VAR_6 += VAR_17;
     continue;
 case 128:
     VAR_9 = 0;
     if (*VAR_5 == VAR_0)
  break;
     VAR_6 += VAR_17;
     VAR_17 = FUNC_0(&VAR_18, VAR_6, VAR_1);
     VAR_5 += VAR_16;
     if ((VAR_10 = ((*VAR_6 & VAR_3) == VAR_8)) != 0) {
  VAR_6 += VAR_17;
  VAR_17 = FUNC_0(&VAR_18, VAR_6, VAR_1);
     }
     VAR_20 = VAR_18;
     while ((*VAR_6 & VAR_3) != VAR_2) {
  if ((*VAR_6 & VAR_3) == VAR_4) {
      __Char VAR_21;

      VAR_6 += VAR_17;
      VAR_17 = FUNC_0(&VAR_21, VAR_6, VAR_1);
      if (FUNC_1(VAR_20, VAR_19, 0) <= 0 &&
   FUNC_1(VAR_19, VAR_21, 0) <= 0)
   VAR_9 = 1;
  } else if (VAR_18 == VAR_19)
      VAR_9 = 1;
  VAR_6 += VAR_17;
  VAR_20 = VAR_18;
  VAR_17 = FUNC_0(&VAR_18, VAR_6, VAR_1);
     }
     VAR_6 += VAR_17;
     VAR_17 = FUNC_0(&VAR_18, VAR_6, VAR_1);
     if (VAR_9 == VAR_10)
  break;
     continue;
 default:
     if (*VAR_5 == VAR_0 || FUNC_3(VAR_19) != FUNC_3(VAR_18))
  break;
     VAR_5 += VAR_16;
     VAR_6 += VAR_17;
     continue;
 }
 if (VAR_12 != VAR_13
     && (VAR_14 == ((void*)0) || VAR_12 <= VAR_14)) {
     VAR_6 = VAR_11;
     VAR_5 = VAR_12;
     continue;
 }
 return 0;
    }
    return 1;
}
