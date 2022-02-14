
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u_char ;
typedef int RSA ;


 int VAR_0 ;
 int FUNC_0 (size_t,int const*,int const*,int *,int ) ;
 size_t FUNC_1 (int *) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int const*,size_t) ;
 int const* FUNC_3 (size_t) ;
 int FUNC_4 (int,int const**,size_t*) ;
 size_t FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int const*,int const*,size_t) ;

__attribute__((used)) static int
FUNC_7(int VAR_8, u_char *VAR_9, size_t VAR_10,
    u_char *VAR_11, size_t VAR_12, RSA *VAR_13)
{
 size_t VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 const u_char *VAR_21 = ((void*)0);
 u_char *VAR_22 = ((void*)0);

 if ((VAR_17 = FUNC_4(VAR_8, &VAR_21, &VAR_15)) != 0)
  return VAR_17;
 VAR_17 = VAR_3;
 VAR_16 = FUNC_5(VAR_8);
 if (VAR_10 != VAR_16) {
  VAR_17 = VAR_4;
  goto done;
 }
 VAR_14 = FUNC_1(VAR_13);
 if (VAR_14 <= 0 || VAR_14 > VAR_1 ||
     VAR_12 == 0 || VAR_12 > VAR_14) {
  VAR_17 = VAR_4;
  goto done;
 }
 if ((VAR_22 = FUNC_3(VAR_14)) == ((void*)0)) {
  VAR_17 = VAR_2;
  goto done;
 }
 if ((VAR_18 = FUNC_0(VAR_12, VAR_11, VAR_22, VAR_13,
     VAR_0)) < 0) {
  VAR_17 = VAR_6;
  goto done;
 }
 if (VAR_18 < 0 || (size_t)VAR_18 != VAR_16 + VAR_15) {
  VAR_17 = VAR_5;
  goto done;
 }
 VAR_19 = FUNC_6(VAR_22, VAR_21, VAR_15) == 0;
 VAR_20 = FUNC_6(VAR_22 + VAR_15, VAR_9, VAR_16) == 0;
 if (!VAR_19 || !VAR_20) {
  VAR_17 = VAR_7;
  goto done;
 }
 VAR_17 = 0;
done:
 FUNC_2(VAR_22, VAR_14);
 return VAR_17;
}
