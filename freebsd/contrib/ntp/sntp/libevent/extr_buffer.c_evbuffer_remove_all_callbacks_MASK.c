
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_cb_entry {int dummy; } ;
struct evbuffer {int callbacks; } ;


 struct evbuffer_cb_entry* FUNC_0 (int *) ;
 int FUNC_1 (struct evbuffer_cb_entry*,int ) ;
 int FUNC_2 (struct evbuffer_cb_entry*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct evbuffer *VAR_1)
{
 struct evbuffer_cb_entry *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1->callbacks))) {
  FUNC_1(VAR_2, VAR_0);
  FUNC_2(VAR_2);
 }
}
