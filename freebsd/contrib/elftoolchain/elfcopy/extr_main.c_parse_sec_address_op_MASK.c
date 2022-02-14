
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct sec_action {int setlma; int setvma; void* vma_adjust; void* lma_adjust; void* vma; void* lma; } ;
struct elfcopy {int dummy; } ;
typedef void* int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char const*) ;
 struct sec_action* FUNC_1 (struct elfcopy*,char const*,int) ;
 int FUNC_2 (char*,int *,int ) ;
 int FUNC_3 (char*,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct elfcopy *VAR_4, int VAR_5, const char *VAR_6,
    char *VAR_7)
{
 struct sec_action *VAR_8;
 const char *VAR_9;
 char *VAR_10;
 char VAR_11;

 VAR_9 = VAR_10 = VAR_7;
 do {
  VAR_10++;
 } while (*VAR_10 != '\0' && *VAR_10 != '=' && *VAR_10 != '+' && *VAR_10 != '-');
 if (*VAR_10 == '\0' || *(VAR_10 + 1) == '\0')
  FUNC_0(VAR_3, "invalid format for %s", VAR_6);
 VAR_11 = *VAR_10;
 *VAR_10++ = '\0';
 VAR_8 = FUNC_1(VAR_4, VAR_9, 1);
 switch (VAR_11) {
 case '=':
  if (VAR_5 == VAR_1 ||
      VAR_5 == VAR_0) {
   VAR_8->setlma = 1;
   VAR_8->lma = (uint64_t) FUNC_3(VAR_10, ((void*)0), 0);
  }
  if (VAR_5 == VAR_2 ||
      VAR_5 == VAR_0) {
   VAR_8->setvma = 1;
   VAR_8->vma = (uint64_t) FUNC_3(VAR_10, ((void*)0), 0);
  }
  break;
 case '+':
  if (VAR_5 == VAR_1 ||
      VAR_5 == VAR_0)
   VAR_8->lma_adjust = (int64_t) FUNC_2(VAR_10, ((void*)0), 0);
  if (VAR_5 == VAR_2 ||
      VAR_5 == VAR_0)
   VAR_8->vma_adjust = (int64_t) FUNC_2(VAR_10, ((void*)0), 0);
  break;
 case '-':
  if (VAR_5 == VAR_1 ||
      VAR_5 == VAR_0)
   VAR_8->lma_adjust = (int64_t) -FUNC_2(VAR_10, ((void*)0), 0);
  if (VAR_5 == VAR_2 ||
      VAR_5 == VAR_0)
   VAR_8->vma_adjust = (int64_t) -FUNC_2(VAR_10, ((void*)0), 0);
  break;
 default:
  break;
 }
}
