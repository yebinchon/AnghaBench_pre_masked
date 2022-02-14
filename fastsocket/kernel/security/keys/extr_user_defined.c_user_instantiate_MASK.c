
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_key_payload {size_t datalen; int data; } ;
struct key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct key*,size_t) ;
 struct user_key_payload* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,void const*,size_t) ;
 int FUNC_3 (struct key*,struct user_key_payload*) ;

int FUNC_4(struct key *VAR_3, const void *VAR_4, size_t VAR_5)
{
 struct user_key_payload *VAR_6;
 int VAR_7;

 VAR_7 = -VAR_0;
 if (VAR_5 <= 0 || VAR_5 > 32767 || !VAR_4)
  goto error;

 VAR_7 = FUNC_0(VAR_3, VAR_5);
 if (VAR_7 < 0)
  goto error;

 VAR_7 = -VAR_1;
 VAR_6 = FUNC_1(sizeof(*VAR_6) + VAR_5, VAR_2);
 if (!VAR_6)
  goto error;


 VAR_6->datalen = VAR_5;
 FUNC_2(VAR_6->data, VAR_4, VAR_5);
 FUNC_3(VAR_3, VAR_6);
 VAR_7 = 0;

error:
 return VAR_7;
}
