
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt64 ;
typedef char UChar ;
typedef size_t Int32 ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;

__attribute__((used)) static
void FUNC_2 ( char* VAR_0, UInt64* VAR_1 )
{
   Int32 VAR_2, VAR_3;
   UChar VAR_4[32];
   Int32 VAR_5 = 0;
   UInt64 VAR_6 = *VAR_1;
   do {
      VAR_3 = FUNC_1 ( &VAR_6 );
      VAR_4[VAR_5] = VAR_3 + '0';
      VAR_5++;
   } while (!FUNC_0(&VAR_6));
   VAR_0[VAR_5] = 0;
   for (VAR_2 = 0; VAR_2 < VAR_5; VAR_2++)
      VAR_0[VAR_2] = VAR_4[VAR_5-VAR_2-1];
}
