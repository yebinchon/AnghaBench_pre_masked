
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
typedef char uint32_t ;
struct TYPE_2__ {void* depth; void* mf; void* nice_len; void* mode; void* pb; void* lp; void* lc; void* dict_size; } ;
typedef TYPE_1__ lzma_options_lzma ;


 char VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (void*,char) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, unsigned VAR_2, uint64_t VAR_3, const char *VAR_4)
{
 lzma_options_lzma *VAR_5 = VAR_1;

 switch (VAR_2) {
 case 128: {
  if (VAR_4[0] < '0' || VAR_4[0] > '9')
   FUNC_0(VAR_4);

  uint32_t VAR_6 = VAR_4[0] - '0';



  if (VAR_4[1] != '\0') {
   if (VAR_4[1] == 'e')
    VAR_6 |= VAR_0;
   else
    FUNC_0(VAR_4);

   if (VAR_4[2] != '\0')
    FUNC_0(VAR_4);
  }

  if (FUNC_1(VAR_1, VAR_6))
   FUNC_0(VAR_4);

  break;
 }

 case 135:
  VAR_5->dict_size = VAR_3;
  break;

 case 134:
  VAR_5->lc = VAR_3;
  break;

 case 133:
  VAR_5->lp = VAR_3;
  break;

 case 129:
  VAR_5->pb = VAR_3;
  break;

 case 131:
  VAR_5->mode = VAR_3;
  break;

 case 130:
  VAR_5->nice_len = VAR_3;
  break;

 case 132:
  VAR_5->mf = VAR_3;
  break;

 case 136:
  VAR_5->depth = VAR_3;
  break;
 }
}
