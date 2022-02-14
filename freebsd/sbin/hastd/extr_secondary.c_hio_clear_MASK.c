
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hio {int hio_memsync; scalar_t__ hio_length; scalar_t__ hio_offset; int hio_cmd; scalar_t__ hio_error; scalar_t__ hio_seq; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct hio *VAR_1)
{

 VAR_1->hio_seq = 0;
 VAR_1->hio_error = 0;
 VAR_1->hio_cmd = VAR_0;
 VAR_1->hio_offset = 0;
 VAR_1->hio_length = 0;
 VAR_1->hio_memsync = 0;
}
