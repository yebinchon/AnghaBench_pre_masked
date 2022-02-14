
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ts_config {int flags; } ;
struct ts_bm {unsigned int patlen; int * pattern; scalar_t__ good_shift; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (struct ts_config*) ;
 int VAR_0 ;
 struct ts_config* FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct ts_bm*,int) ;
 int FUNC_3 (int *,void const*,unsigned int) ;
 int FUNC_4 (int ) ;
 struct ts_bm* FUNC_5 (struct ts_config*) ;

__attribute__((used)) static struct ts_config *FUNC_6(const void *VAR_1, unsigned int VAR_2,
     gfp_t VAR_3, int VAR_4)
{
 struct ts_config *VAR_5;
 struct ts_bm *VAR_6;
 int VAR_7;
 unsigned int VAR_8 = VAR_2 * sizeof(unsigned int);
 size_t VAR_9 = sizeof(*VAR_6) + VAR_2 + VAR_8;

 VAR_5 = FUNC_1(VAR_9, VAR_3);
 if (FUNC_0(VAR_5))
  return VAR_5;

 VAR_5->flags = VAR_4;
 VAR_6 = FUNC_5(VAR_5);
 VAR_6->patlen = VAR_2;
 VAR_6->pattern = (u8 *) VAR_6->good_shift + VAR_8;
 if (VAR_4 & VAR_0)
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
   VAR_6->pattern[VAR_7] = FUNC_4(((u8 *)VAR_1)[VAR_7]);
 else
  FUNC_3(VAR_6->pattern, VAR_1, VAR_2);
 FUNC_2(VAR_6, VAR_4);

 return VAR_5;
}
