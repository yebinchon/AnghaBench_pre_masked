
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padlock_sha_ctx {void* psc_buf; int psc_size; int psc_offset; } ;
struct auth_hash {scalar_t__ type; int ctxsize; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,void*,int ) ;
 void* FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_2(struct auth_hash *VAR_6, void *VAR_7, void *VAR_8)
{

 if ((VAR_5 & VAR_4) != 0 &&
     (VAR_6->type == VAR_0 ||
      VAR_6->type == VAR_1)) {
  struct padlock_sha_ctx *VAR_9 = VAR_7, *VAR_10 = VAR_8;

  VAR_10->psc_offset = VAR_9->psc_offset;
  VAR_10->psc_size = VAR_9->psc_size;
  VAR_10->psc_buf = FUNC_1(VAR_10->psc_size, VAR_2, VAR_3);
  FUNC_0(VAR_9->psc_buf, VAR_10->psc_buf, VAR_10->psc_size);
 } else {
  FUNC_0(VAR_7, VAR_8, VAR_6->ctxsize);
 }
}
