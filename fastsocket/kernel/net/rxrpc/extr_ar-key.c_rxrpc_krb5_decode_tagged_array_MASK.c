
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct krb5_tagged_data {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*,unsigned int,size_t,unsigned int,unsigned int) ;
 int FUNC_2 (char*,unsigned int) ;
 struct krb5_tagged_data* FUNC_3 (int,unsigned int,int ) ;
 unsigned int FUNC_4 (int const) ;
 int FUNC_5 (struct krb5_tagged_data*,size_t,int const**,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct krb5_tagged_data **VAR_3,
       u8 *VAR_4,
       u8 VAR_5,
       size_t VAR_6,
       const __be32 **VAR_7,
       unsigned *VAR_8)
{
 struct krb5_tagged_data *VAR_9;
 const __be32 *VAR_10 = *VAR_7;
 unsigned VAR_11 = *VAR_8, VAR_12, VAR_13;
 int VAR_14;


 if (VAR_11 < 4)
  return -VAR_0;

 FUNC_1(",,%u,%zu,{%x},%u",
        VAR_5, VAR_6, FUNC_4(VAR_10[0]), VAR_11);

 VAR_12 = FUNC_4(*VAR_10++);
 VAR_11 -= 4;
 if (VAR_12 < 0 || VAR_12 > VAR_5)
  return -VAR_0;
 *VAR_4 = VAR_12;
 if (VAR_12 > 0) {
  if (VAR_11 <= (VAR_12 + 1) * 4)
   return -VAR_0;

  FUNC_0("n_elem %d", VAR_12);

  VAR_9 = FUNC_3(sizeof(struct krb5_tagged_data), VAR_12,
        VAR_2);
  if (!VAR_9)
   return -VAR_1;
  *VAR_3 = VAR_9;

  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
   VAR_14 = FUNC_5(&VAR_9[VAR_13],
           VAR_6,
           &VAR_10, &VAR_11);
   if (VAR_14 < 0)
    return VAR_14;
  }
 }

 *VAR_7 = VAR_10;
 *VAR_8 = VAR_11;
 FUNC_2(" = 0 [toklen=%u]", VAR_11);
 return 0;
}
