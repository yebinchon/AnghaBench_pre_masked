
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef int ev_ssize_t ;
typedef enum bufferevent_flush_mode { ____Placeholder_bufferevent_flush_mode } bufferevent_flush_mode ;
typedef enum bufferevent_filter_result { ____Placeholder_bufferevent_filter_result } bufferevent_filter_result ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct evbuffer*,unsigned char const*,int) ;
 int FUNC_2 (struct evbuffer*,unsigned int) ;
 unsigned int FUNC_3 (struct evbuffer*) ;
 unsigned char* FUNC_4 (struct evbuffer*,unsigned int) ;

__attribute__((used)) static enum bufferevent_filter_result
FUNC_5(struct evbuffer *VAR_1, struct evbuffer *VAR_2,
    ev_ssize_t VAR_3, enum bufferevent_flush_mode VAR_4, void *VAR_5)
{
 const unsigned char *VAR_6;
 unsigned VAR_7;

 VAR_6 = FUNC_4(VAR_1, FUNC_3(VAR_1));
 for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_1); VAR_7 += 2) {
  if (VAR_6[VAR_7] == '-')
   continue;

  FUNC_0(VAR_6[VAR_7] == 'x');
  FUNC_1(VAR_2, VAR_6 + VAR_7 + 1, 1);
 }

 FUNC_2(VAR_1, VAR_7);
 return (VAR_0);
}
