
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ length; int action_code; scalar_t__ offset; } ;
typedef TYPE_1__ svn_txdelta_op_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 unsigned char* FUNC_1 (TYPE_1__*,unsigned char const*,unsigned char const*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int * FUNC_3 (int ,int *,int ,int) ;




__attribute__((used)) static svn_error_t *
FUNC_4(int *VAR_2,
                              const unsigned char *VAR_3,
                              const unsigned char *VAR_4,
                              apr_size_t VAR_5,
                              apr_size_t VAR_6,
                              apr_size_t VAR_7)
{
  int VAR_8 = 0;
  svn_txdelta_op_t VAR_9;
  apr_size_t VAR_10 = 0, VAR_11 = 0;

  while (VAR_3 < VAR_4)
    {
      VAR_3 = FUNC_1(&VAR_9, VAR_3, VAR_4);


      if (VAR_3 == ((void*)0))
        return FUNC_3
          (VAR_0, ((void*)0),
           FUNC_0("Invalid diff stream: insn %d cannot be decoded"), VAR_8);
      else if (VAR_9.length == 0)
        return FUNC_3
          (VAR_0, ((void*)0),
           FUNC_0("Invalid diff stream: insn %d has length zero"), VAR_8);
      else if (VAR_9.length > VAR_6 - VAR_10)
        return FUNC_3
          (VAR_0, ((void*)0),
           FUNC_0("Invalid diff stream: insn %d overflows the target view"), VAR_8);

      switch (VAR_9.action_code)
        {
        case 129:
          if (VAR_9.length > VAR_5 - VAR_9.offset ||
              VAR_9.offset > VAR_5)
            return FUNC_3
              (VAR_0, ((void*)0),
               FUNC_0("Invalid diff stream: "
                 "[src] insn %d overflows the source view"), VAR_8);
          break;
        case 128:
          if (VAR_9.offset >= VAR_10)
            return FUNC_3
              (VAR_0, ((void*)0),
               FUNC_0("Invalid diff stream: "
                 "[tgt] insn %d starts beyond the target view position"), VAR_8);
          break;
        case 130:
          if (VAR_9.length > VAR_7 - VAR_11)
            return FUNC_3
              (VAR_0, ((void*)0),
               FUNC_0("Invalid diff stream: "
                 "[new] insn %d overflows the new data section"), VAR_8);
          VAR_11 += VAR_9.length;
          break;
        }
      VAR_10 += VAR_9.length;
      VAR_8++;
    }
  if (VAR_10 != VAR_6)
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_0("Delta does not fill the target window"));
  if (VAR_11 != VAR_7)
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_0("Delta does not contain enough new data"));

  *VAR_2 = VAR_8;
  return VAR_1;
}
