
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t pos_in_chain; scalar_t__ chain; } ;
struct evbuffer_ptr {size_t pos; TYPE_1__ internal_; } ;
struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct evbuffer*,struct evbuffer_ptr*,size_t const,int ) ;

__attribute__((used)) static int
FUNC_1(struct evbuffer *VAR_1, struct evbuffer_ptr *VAR_2,
    size_t VAR_3)
{
 if (VAR_2->pos < 0)
  return -1;
 if (VAR_3 > (size_t)VAR_2->pos)
  return -1;
 if (VAR_2->internal_.chain && VAR_3 <= VAR_2->internal_.pos_in_chain) {
  VAR_2->internal_.pos_in_chain -= VAR_3;
  VAR_2->pos -= VAR_3;
  return 0;
 } else {
  const size_t VAR_4 = VAR_2->pos - VAR_3;


  return FUNC_0(VAR_1, VAR_2, VAR_4, VAR_0);
 }
}
