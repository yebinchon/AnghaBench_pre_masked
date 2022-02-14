
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (size_t,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int *,int *,scalar_t__) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static inline void
FUNC_4(u_char *VAR_6, size_t VAR_7)
{

 FUNC_3(VAR_4, 0,VAR_2);


 FUNC_2(&VAR_3, VAR_4, VAR_4, VAR_2);

 if (VAR_6) {
  size_t VAR_8, VAR_9;

  VAR_9 = FUNC_0(VAR_7, VAR_1 + VAR_0);
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
   VAR_4[VAR_8] ^= VAR_6[VAR_8];
 }

 FUNC_1(VAR_4, VAR_1 + VAR_0);
 FUNC_3(VAR_4, 0, VAR_1 + VAR_0);
 VAR_5 = VAR_2 - VAR_1 - VAR_0;
}
