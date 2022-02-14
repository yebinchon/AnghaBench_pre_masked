
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int phandle_t ;
typedef int pcells ;
typedef int pcell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char const*,int*,int) ;
 int FUNC_1 (int ,char const*,int,void**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int,int ,int ) ;
 int FUNC_5 (char*,char const*,...) ;

__attribute__((used)) static int
FUNC_6(phandle_t VAR_4, const char *VAR_5,
    const char *VAR_6, int VAR_7, phandle_t *VAR_8, int *VAR_9,
    pcell_t **VAR_10)
{
 phandle_t VAR_11;
 phandle_t *VAR_12;
 uint32_t VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_12 = ((void*)0);
 VAR_17 = FUNC_1(VAR_4, VAR_5, sizeof(*VAR_12),
     (void **)&VAR_12);
 if (VAR_17 <= 0)
  return (VAR_0);
 VAR_14 = (VAR_7 == -1) ? 0 : VAR_0;
 for (VAR_15 = 0, VAR_18 = 0; VAR_15 < VAR_17; VAR_15 += VAR_13, VAR_18++) {
  VAR_11 = VAR_12[VAR_15++];
  if (FUNC_0(FUNC_2(VAR_11),
      VAR_6, &VAR_13, sizeof(VAR_13)) == -1) {
   FUNC_5("Missing %s property\n", VAR_6);
   VAR_14 = VAR_0;
   break;
  }

  if ((VAR_15 + VAR_13) > VAR_17) {
   FUNC_5("Invalid %s property value <%d>\n", VAR_6,
       VAR_13);
   VAR_14 = VAR_1;
   break;
  }
  if (VAR_18 == VAR_7) {
   *VAR_10= FUNC_4(VAR_13 * sizeof(**VAR_10), VAR_2,
       VAR_3);
   *VAR_8 = VAR_11;
   *VAR_9 = VAR_13;
   for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++)
    (*VAR_10)[VAR_16] = VAR_12[VAR_15 + VAR_16];
   VAR_14 = 0;
   break;
  }
 }
 if (VAR_12 != ((void*)0))
  FUNC_3(VAR_12, VAR_2);
 if (VAR_7 == -1 && VAR_14 == 0)
  *VAR_9 = VAR_18;
 return (VAR_14);
}
