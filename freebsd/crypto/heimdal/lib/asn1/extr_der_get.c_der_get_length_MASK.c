
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const*,size_t,unsigned int*,size_t*) ;

int
FUNC_1 (const unsigned char *VAR_2, size_t VAR_3,
  size_t *VAR_4, size_t *VAR_5)
{
    size_t VAR_6;

    if (VAR_3 <= 0)
 return VAR_1;
    --VAR_3;
    VAR_6 = *VAR_2++;
    if (VAR_6 < 128) {
 *VAR_4 = VAR_6;
 if(VAR_5) *VAR_5 = 1;
    } else {
 int VAR_7;
 size_t VAR_8;
 unsigned VAR_9;

 if(VAR_6 == 0x80){
     *VAR_4 = VAR_0;
     if(VAR_5) *VAR_5 = 1;
     return 0;
 }
 VAR_6 &= 0x7F;
 if (VAR_3 < VAR_6)
     return VAR_1;
 VAR_7 = FUNC_0 (VAR_2, VAR_6, &VAR_9, &VAR_8);
 if(VAR_7) return VAR_7;
 *VAR_4 = VAR_9;
 if(VAR_5) *VAR_5 = VAR_8 + 1;
    }
    return 0;
}
