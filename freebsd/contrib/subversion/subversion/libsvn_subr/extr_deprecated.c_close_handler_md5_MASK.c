
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct md5_stream_baton {TYPE_1__* write_checksum; int pool; void** write_digest; TYPE_2__* read_checksum; void** read_digest; int proxy; } ;
struct TYPE_4__ {int digest; } ;
struct TYPE_3__ {int digest; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 void* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_2)
{
  struct md5_stream_baton *VAR_3 = VAR_2;

  FUNC_0(FUNC_2(VAR_3->proxy));

  if (VAR_3->read_digest)
    *VAR_3->read_digest
      = FUNC_1(VAR_3->pool, VAR_3->read_checksum->digest,
                    VAR_0);

  if (VAR_3->write_digest)
    *VAR_3->write_digest
      = FUNC_1(VAR_3->pool, VAR_3->write_checksum->digest,
                    VAR_0);

  return VAR_1;
}
