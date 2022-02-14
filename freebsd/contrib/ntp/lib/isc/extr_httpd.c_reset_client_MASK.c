
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bodybuffer; int headerbuffer; scalar_t__ flags; int * protocol; int * querystring; int * url; int method; scalar_t__ recvlen; scalar_t__* recvbuf; } ;
typedef TYPE_1__ isc_httpd_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(isc_httpd_t *VAR_2)
{




 FUNC_0(FUNC_1(VAR_2));
 FUNC_0(!FUNC_2(&VAR_2->headerbuffer, VAR_1));
 FUNC_0(!FUNC_2(&VAR_2->bodybuffer, VAR_1));

 VAR_2->recvbuf[0] = 0;
 VAR_2->recvlen = 0;
 VAR_2->method = VAR_0;
 VAR_2->url = ((void*)0);
 VAR_2->querystring = ((void*)0);
 VAR_2->protocol = ((void*)0);
 VAR_2->flags = 0;

 FUNC_3(&VAR_2->headerbuffer);
 FUNC_4(&VAR_2->bodybuffer);
}
