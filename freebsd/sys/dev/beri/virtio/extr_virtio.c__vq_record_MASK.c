
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct vring_desc {int flags; int len; int addr; } ;
struct iovec {int iov_len; int iov_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_4(uint32_t VAR_0, int VAR_1, volatile struct vring_desc *VAR_2,
 struct iovec *VAR_3, int VAR_4, uint16_t *VAR_5) {

 if (VAR_1 >= VAR_4)
  return;

 VAR_3[VAR_1].iov_base = FUNC_3(VAR_0, FUNC_2(VAR_2->addr),
    FUNC_1(VAR_2->len));
 VAR_3[VAR_1].iov_len = FUNC_1(VAR_2->len);
 if (VAR_5 != ((void*)0))
  VAR_5[VAR_1] = FUNC_0(VAR_2->flags);
}
