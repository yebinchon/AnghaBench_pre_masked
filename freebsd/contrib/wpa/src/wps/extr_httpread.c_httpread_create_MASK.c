
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httpread {int sd; void (* cb ) (struct httpread*,void*,int) ;int max_bytes; int timeout_seconds; void* cookie; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int ,int *,struct httpread*) ;
 scalar_t__ FUNC_1 (int,int ,int ,int *,struct httpread*) ;
 int FUNC_2 (struct httpread*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct httpread* FUNC_3 (int) ;

struct httpread * FUNC_4(
 int VAR_3,
 void (*VAR_4)(struct httpread *VAR_5, void *VAR_6,
     enum httpread_event VAR_7),
 void *VAR_8,
 int VAR_9,
 int VAR_10
 )
{
 struct httpread *VAR_11 = ((void*)0);

 VAR_11 = FUNC_3(sizeof(*VAR_11));
 if (VAR_11 == ((void*)0))
  goto fail;
 VAR_11->sd = VAR_3;
 VAR_11->cb = VAR_4;
 VAR_11->cookie = VAR_8;
 VAR_11->max_bytes = VAR_9;
 VAR_11->timeout_seconds = VAR_10;

 if (VAR_10 > 0 &&
     FUNC_1(VAR_10, 0,
       VAR_2, ((void*)0), VAR_11)) {

  goto fail;
 }
 if (FUNC_0(VAR_3, VAR_0, VAR_1,
    ((void*)0), VAR_11)) {

  goto fail;
 }
 return VAR_11;

fail:


 FUNC_2(VAR_11);
 return ((void*)0);
}
