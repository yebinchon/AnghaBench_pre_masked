
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_compressor {int name; scalar_t__ comp_mutex; int cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void const*,int,void*,unsigned int*) ;
 int FUNC_1 (void*,void const*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct ubifs_compressor** VAR_3 ;
 int FUNC_4 (char*,int,int ,int) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(const void *VAR_4, int VAR_5, void *VAR_6, int *VAR_7,
      int *VAR_8)
{
 int VAR_9;
 struct ubifs_compressor *VAR_10 = VAR_3[*VAR_8];

 if (*VAR_8 == VAR_0)
  goto no_compr;


 if (VAR_5 < VAR_2)
  goto no_compr;

 if (VAR_10->comp_mutex)
  FUNC_2(VAR_10->comp_mutex);
 VAR_9 = FUNC_0(VAR_10->cc, VAR_4, VAR_5, VAR_6,
       (unsigned int *)VAR_7);
 if (VAR_10->comp_mutex)
  FUNC_3(VAR_10->comp_mutex);
 if (FUNC_5(VAR_9)) {
  FUNC_4("cannot compress %d bytes, compressor %s, "
      "error %d, leave data uncompressed",
      VAR_5, VAR_10->name, VAR_9);
   goto no_compr;
 }





 if (VAR_5 - *VAR_7 < VAR_1)
  goto no_compr;

 return;

no_compr:
 FUNC_1(VAR_6, VAR_4, VAR_5);
 *VAR_7 = VAR_5;
 *VAR_8 = VAR_0;
}
