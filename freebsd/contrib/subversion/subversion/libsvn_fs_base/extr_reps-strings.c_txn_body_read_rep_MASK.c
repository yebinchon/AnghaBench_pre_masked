
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int pool; } ;
typedef TYPE_2__ trail_t ;
typedef int svn_error_t ;
struct read_rep_args {scalar_t__* len; TYPE_1__* rb; int buf; } ;
struct TYPE_10__ {scalar_t__ sha1_checksum; scalar_t__ md5_checksum; } ;
typedef TYPE_3__ representation_t ;
struct TYPE_8__ {scalar_t__ offset; scalar_t__ size; scalar_t__ rep_key; int sha1_checksum; int md5_checksum; int fs; scalar_t__ checksum_finalized; int sha1_checksum_ctx; int md5_checksum_ctx; int scratch_pool; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int ,scalar_t__*,TYPE_2__*,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int * FUNC_5 (scalar_t__,int ,int ,int *,scalar_t__) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int * FUNC_7 (int ,int *,int *) ;
 int * FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (TYPE_3__**,int ,scalar_t__,TYPE_2__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_10(void *VAR_4, trail_t *VAR_5)
{
  struct read_rep_args *VAR_6 = VAR_4;

  if (VAR_6->rb->rep_key)
    {
      FUNC_0(FUNC_2(VAR_6->rb->fs,
                             VAR_6->rb->rep_key,
                             VAR_6->rb->offset,
                             VAR_6->buf,
                             VAR_6->len,
                             VAR_5,
                             VAR_6->rb->scratch_pool));

      VAR_6->rb->offset += *(VAR_6->len);
      if (! VAR_6->rb->checksum_finalized)
        {
          FUNC_0(FUNC_6(VAR_6->rb->md5_checksum_ctx, VAR_6->buf,
                                      *(VAR_6->len)));
          FUNC_0(FUNC_6(VAR_6->rb->sha1_checksum_ctx, VAR_6->buf,
                                      *(VAR_6->len)));

          if (VAR_6->rb->offset == VAR_6->rb->size)
            {
              representation_t *VAR_7;

              FUNC_0(FUNC_3(&VAR_6->rb->md5_checksum,
                                         VAR_6->rb->md5_checksum_ctx,
                                         VAR_5->pool));
              FUNC_0(FUNC_3(&VAR_6->rb->sha1_checksum,
                                         VAR_6->rb->sha1_checksum_ctx,
                                         VAR_5->pool));
              VAR_6->rb->checksum_finalized = VAR_3;

              FUNC_0(FUNC_9(&VAR_7, VAR_6->rb->fs,
                                           VAR_6->rb->rep_key,
                                           VAR_5, VAR_5->pool));

              if (VAR_7->md5_checksum
                  && (! FUNC_4(VAR_7->md5_checksum,
                                           VAR_6->rb->md5_checksum)))
                return FUNC_7(VAR_0,
                        FUNC_5(VAR_7->md5_checksum,
                             VAR_6->rb->md5_checksum, VAR_5->pool,
                             FUNC_1("MD5 checksum mismatch on representation '%s'"),
                             VAR_6->rb->rep_key),
                        ((void*)0));

              if (VAR_7->sha1_checksum
                  && (! FUNC_4(VAR_7->sha1_checksum,
                                           VAR_6->rb->sha1_checksum)))
                return FUNC_8(VAR_0,
                        FUNC_5(VAR_7->sha1_checksum,
                            VAR_6->rb->sha1_checksum, VAR_5->pool,
                            FUNC_1("SHA1 checksum mismatch on representation '%s'"),
                            VAR_6->rb->rep_key),
                        ((void*)0));
            }
        }
    }
  else if (VAR_6->rb->offset > 0)
    {
      return
        FUNC_7
        (VAR_1, ((void*)0),
         FUNC_1("Null rep, but offset past zero already"));
    }
  else
    *(VAR_6->len) = 0;

  return VAR_2;
}
