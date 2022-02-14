
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lzss {unsigned char* window; } ;
typedef int int64_t ;


 size_t FUNC_0 (struct lzss*,int ) ;

__attribute__((used)) static inline unsigned char *
FUNC_1(struct lzss *VAR_0, int64_t VAR_1)
{
  return &VAR_0->window[FUNC_0(VAR_0, VAR_1)];
}
