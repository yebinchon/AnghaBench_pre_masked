
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_state {int uio; int fp; } ;
typedef int locale_t ;


 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct io_state *VAR_0, locale_t VAR_1)
{

 return (FUNC_0(VAR_0->fp, &VAR_0->uio, VAR_1));
}
