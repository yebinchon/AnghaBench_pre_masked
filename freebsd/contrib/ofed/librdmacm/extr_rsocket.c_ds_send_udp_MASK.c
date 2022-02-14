
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rsocket {int dummy; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
typedef int ssize_t ;


 int FUNC_0 (struct rsocket*,struct iovec*,int,int,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct rsocket *VAR_0, const void *VAR_1, size_t VAR_2,
      int VAR_3, uint8_t VAR_4)
{
 struct iovec VAR_5;
 if (VAR_1 && VAR_2) {
  VAR_5.iov_base = (void *) VAR_1;
  VAR_5.iov_len = VAR_2;
  return FUNC_0(VAR_0, &VAR_5, 1, VAR_3, VAR_4);
 } else {
  return FUNC_0(VAR_0, ((void*)0), 0, VAR_3, VAR_4);
 }
}
