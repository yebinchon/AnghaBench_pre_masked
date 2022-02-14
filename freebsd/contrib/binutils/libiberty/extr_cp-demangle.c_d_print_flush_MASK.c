
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_print_info {char* buf; size_t len; int opaque; int (* callback ) (char*,size_t,int ) ;} ;


 int FUNC_0 (char*,size_t,int ) ;

__attribute__((used)) static inline void
FUNC_1 (struct d_print_info *VAR_0)
{
  VAR_0->buf[VAR_0->len] = '\0';
  VAR_0->callback (VAR_0->buf, VAR_0->len, VAR_0->opaque);
  VAR_0->len = 0;
}
