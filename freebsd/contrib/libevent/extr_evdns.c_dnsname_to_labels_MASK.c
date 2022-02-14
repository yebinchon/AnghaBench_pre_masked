
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct dnslabel_table {int dummy; } ;
typedef int off_t ;
typedef scalar_t__ ev_uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dnslabel_table*,char const* const,int) ;
 int FUNC_2 (struct dnslabel_table*,char const*) ;
 int FUNC_3 (scalar_t__* const,char const* const,size_t const) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static off_t
FUNC_5(u8 *const VAR_0, size_t VAR_1, off_t VAR_2,
      const char *VAR_3, const size_t VAR_4,
      struct dnslabel_table *VAR_5) {
 const char *VAR_6 = VAR_3 + VAR_4;
 int VAR_7 = 0;
 u16 VAR_8;
 if (VAR_4 > 255) return -2;

 for (;;) {
  const char *const VAR_9 = VAR_3;
  if (VAR_5 && (VAR_7 = FUNC_2(VAR_5, VAR_3)) >= 0) {
   do { if (VAR_2 + 2 > (off_t)VAR_1) goto overflow; VAR_8 = FUNC_0(VAR_7 | 0xc000); FUNC_3(VAR_0 + VAR_2, &VAR_8, 2); VAR_2 += 2; } while (0);
   return VAR_2;
  }
  VAR_3 = FUNC_4(VAR_3, '.');
  if (!VAR_3) {
   const size_t VAR_10 = VAR_6 - VAR_9;
   if (VAR_10 > 63) return -1;
   if ((size_t)(VAR_2+VAR_10+1) > VAR_1) return -2;
   if (VAR_5) FUNC_1(VAR_5, VAR_9, VAR_2);
   VAR_0[VAR_2++] = (ev_uint8_t)VAR_10;

   FUNC_3(VAR_0 + VAR_2, VAR_9, VAR_10);
   VAR_2 += (int) VAR_10;
   break;
  } else {

   const size_t VAR_11 = VAR_3 - VAR_9;
   if (VAR_11 > 63) return -1;
   if ((size_t)(VAR_2+VAR_11+1) > VAR_1) return -2;
   if (VAR_5) FUNC_1(VAR_5, VAR_9, VAR_2);
   VAR_0[VAR_2++] = (ev_uint8_t)VAR_11;

   FUNC_3(VAR_0 + VAR_2, VAR_9, VAR_11);
   VAR_2 += (int) VAR_11;

   VAR_3++;
  }
 }




 if (!VAR_2 || VAR_0[VAR_2-1]) VAR_0[VAR_2++] = 0;
 return VAR_2;
 overflow:
 return (-2);
}
