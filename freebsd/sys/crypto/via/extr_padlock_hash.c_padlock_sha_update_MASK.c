
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct padlock_sha_ctx {int psc_size; scalar_t__ psc_offset; int * psc_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const*,int *,scalar_t__) ;
 int * FUNC_2 (int *,int,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct padlock_sha_ctx *VAR_3, const uint8_t *VAR_4, uint16_t VAR_5)
{

 if (VAR_3->psc_size - VAR_3->psc_offset < VAR_5) {
  VAR_3->psc_size = FUNC_0(VAR_3->psc_size * 2, VAR_3->psc_size + VAR_5);
  VAR_3->psc_buf = FUNC_2(VAR_3->psc_buf, VAR_3->psc_size, VAR_2,
      VAR_1);
  if(VAR_3->psc_buf == ((void*)0))
   return (VAR_0);
 }
 FUNC_1(VAR_4, VAR_3->psc_buf + VAR_3->psc_offset, VAR_5);
 VAR_3->psc_offset += VAR_5;
 return (0);
}
