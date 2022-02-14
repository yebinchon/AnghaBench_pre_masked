
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_hkdf_context ;
typedef int br_hash_class ;


 unsigned char* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,unsigned char const*,size_t) ;
 int FUNC_2 (int *,unsigned char*,size_t) ;
 int FUNC_3 (int *,unsigned char*,size_t,unsigned char*,int) ;
 int FUNC_4 (char*,unsigned char*,unsigned char*,size_t) ;
 int FUNC_5 (int ) ;
 size_t FUNC_6 (unsigned char*,char const*) ;
 int FUNC_7 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_8(const br_hash_class *VAR_2, const char *VAR_3,
 const char *VAR_4, const char *VAR_5, const char *VAR_6)
{
 unsigned char VAR_7[100], VAR_8[100], VAR_9[100], VAR_10[100], VAR_11[107];
 const unsigned char *VAR_12;
 size_t VAR_13, VAR_14, VAR_15, VAR_16;
 br_hkdf_context VAR_17;
 size_t VAR_18;

 VAR_13 = FUNC_6(VAR_7, VAR_3);
 if (VAR_4 == ((void*)0)) {
  VAR_12 = VAR_0;
  VAR_14 = 0;
 } else {
  VAR_12 = VAR_8;
  VAR_14 = FUNC_6(VAR_8, VAR_4);
 }
 VAR_15 = FUNC_6(VAR_9, VAR_5);
 VAR_16 = FUNC_6(VAR_10, VAR_6);

 FUNC_1(&VAR_17, VAR_2, VAR_12, VAR_14);
 FUNC_2(&VAR_17, VAR_7, VAR_13);
 FUNC_0(&VAR_17);
 FUNC_3(&VAR_17, VAR_9, VAR_15, VAR_11, VAR_16);
 FUNC_4("KAT HKDF 1", VAR_11, VAR_10, VAR_16);

 FUNC_1(&VAR_17, VAR_2, VAR_12, VAR_14);
 for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18 ++) {
  FUNC_2(&VAR_17, &VAR_7[VAR_18], 1);
 }
 FUNC_0(&VAR_17);
 for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18 ++) {
  FUNC_3(&VAR_17, VAR_9, VAR_15, &VAR_11[VAR_18], 1);
 }
 FUNC_4("KAT HKDF 2", VAR_11, VAR_10, VAR_16);

 FUNC_1(&VAR_17, VAR_2, VAR_12, VAR_14);
 FUNC_2(&VAR_17, VAR_7, VAR_13);
 FUNC_0(&VAR_17);
 for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18 += 7) {
  FUNC_3(&VAR_17, VAR_9, VAR_15, &VAR_11[VAR_18], 7);
 }
 FUNC_4("KAT HKDF 3", VAR_11, VAR_10, VAR_16);

 FUNC_7(".");
 FUNC_5(VAR_1);
}
