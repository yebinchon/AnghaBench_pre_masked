
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pos_in_chain; int * chain; } ;
struct evbuffer_ptr {scalar_t__ pos; TYPE_1__ internal_; } ;
struct evbuffer {int * first; } ;
typedef int it ;
typedef scalar_t__ ev_ssize_t ;
typedef enum evbuffer_eol_style { ____Placeholder_evbuffer_eol_style } evbuffer_eol_style ;







 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;
 int FUNC_2 (struct evbuffer_ptr*) ;
 int FUNC_3 (struct evbuffer_ptr*) ;
 char FUNC_4 (struct evbuffer_ptr*) ;
 int FUNC_5 (struct evbuffer*,struct evbuffer_ptr*,int) ;
 struct evbuffer_ptr FUNC_6 (struct evbuffer*,char*,int,struct evbuffer_ptr*) ;
 int FUNC_7 (struct evbuffer_ptr*,char) ;
 size_t FUNC_8 (struct evbuffer_ptr*,char*) ;
 int FUNC_9 (struct evbuffer_ptr*,struct evbuffer_ptr*,int) ;

struct evbuffer_ptr
FUNC_10(struct evbuffer *VAR_0,
    struct evbuffer_ptr *VAR_1, size_t *VAR_2,
    enum evbuffer_eol_style VAR_3)
{
 struct evbuffer_ptr VAR_4, VAR_5;
 size_t VAR_6 = 0;
 int VAR_7 = 0;


 if (VAR_1 && VAR_1->internal_.chain == ((void*)0)) {
  FUNC_2(&VAR_4);
  if (VAR_2)
   *VAR_2 = VAR_6;
  return VAR_4;
 }

 FUNC_0(VAR_0);

 if (VAR_1) {
  FUNC_9(&VAR_4, VAR_1, sizeof(VAR_4));
 } else {
  VAR_4.pos = 0;
  VAR_4.internal_.chain = VAR_0->first;
  VAR_4.internal_.pos_in_chain = 0;
 }



 switch (VAR_3) {
 case 132:
  if (FUNC_3(&VAR_4) < 0)
   goto done;
  FUNC_9(&VAR_5, &VAR_4, sizeof(VAR_4));
  VAR_6 = FUNC_8(&VAR_5, "\r\n");
  break;
 case 130: {
  VAR_4 = FUNC_6(VAR_0, "\r\n", 2, &VAR_4);
  if (VAR_4.pos < 0)
   goto done;
  VAR_6 = 2;
  break;
 }
 case 131: {
  ev_ssize_t VAR_8 = VAR_4.pos;

  if (FUNC_7(&VAR_4, '\n') < 0)
   goto done;
  VAR_6 = 1;

  if (VAR_4.pos == VAR_8)
   break;



  FUNC_9(&VAR_5, &VAR_4, sizeof(VAR_4));
  if (FUNC_5(VAR_0, &VAR_5, 1)<0)
   break;
  if (FUNC_4(&VAR_5) == '\r') {
   FUNC_9(&VAR_4, &VAR_5, sizeof(VAR_4));
   VAR_6 = 2;
  }
  break;
 }
 case 129:
  if (FUNC_7(&VAR_4, '\n') < 0)
   goto done;
  VAR_6 = 1;
  break;
 case 128:
  if (FUNC_7(&VAR_4, '\0') < 0)
   goto done;
  VAR_6 = 1;
  break;
 default:
  goto done;
 }

 VAR_7 = 1;
done:
 FUNC_1(VAR_0);

 if (!VAR_7)
  FUNC_2(&VAR_4);
 if (VAR_2)
  *VAR_2 = VAR_6;

 return VAR_4;
}
