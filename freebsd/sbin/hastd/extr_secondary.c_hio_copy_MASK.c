
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hio {int hio_memsync; int hio_length; int hio_offset; int hio_cmd; int hio_seq; } ;



__attribute__((used)) static void
FUNC_0(const struct hio *VAR_0, struct hio *VAR_1)
{





 VAR_1->hio_seq = VAR_0->hio_seq;
 VAR_1->hio_cmd = VAR_0->hio_cmd;
 VAR_1->hio_offset = VAR_0->hio_offset;
 VAR_1->hio_length = VAR_0->hio_length;
 VAR_1->hio_memsync = VAR_0->hio_memsync;
}
